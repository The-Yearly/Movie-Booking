import Database
from AccountCreator import *
from refreshment import *
import mysql.connector as m
from Bookandstuff import *
sq=m.connect(host="localhost", user="root", passwd="Arduino1")
c=sq.cursor()
c.execute("use pvr")
def log(un):
    print("Logged In")
    while True:
        print("1:Book Tickets ")
        print("4:Log Out")
        x=int(input("What to do "))
        if x==1:
            c.execute("select movie From movies")
            m=c.fetchall()
            if m!=None:
                for g in range(0,len(m)):
                    print(g,":",m[g][0])
                sel=int(input("Select Movie You Want To See "))
                if sel<len(m) and sel>-1:
                    mo=m[sel][0]
                    c.execute("select slots from movies where movie='{}'".format(mo))
                    slts=c.fetchone()
                    s1="0"
                    s2="0"
                    s3="0"
                    nsl=int(slts[0])
                    c.execute("select time from slot1 where movie='{}'".format(mo))
                    s1=c.fetchall()
                    if nsl>1:
                        c.execute("select time from slot2".format(mo))
                        s2=c.fetchall()
                    if nsl>2:
                        c.execute("select time from slot3".format(mo))
                        s3=c.fetchall()   
                    times={1:"slot1",2:"slot2",3:"slot3"}
                    
                    while True:
                        print("1:",s1[0][0])
                        if s2!="0":
                            print("2:",s2[0][0])
                        if s3!="0":
                             print("3:",s3[0][0])
                        st=int(input("Enter The Time Slot You Want To Select "))
                        if st==1:
                            slot=times[1]
                            break
                        elif st==2 and nsl>1:
                            slot=times[2]
                            break
                        elif st==3 and nsl>2:
                            slot=times[3]
                            break
                        else:
                            print("Pls Enter A Valid Input ")
                    movieset(mo,slot)        
                    print("Booking Setup Ok Moving On RefreshMent")
                    dr=input("Do You Want Refreshments Y/N ")
                    if dr=="Y":
                        items,sop=beverage()
                        print("Your Items Are",items,"And They Cost",sop)
                else:
                    print("Enter A Valid Movie")
            else:
               print("We Are Currently Not Screening Any Movies Pls Try Agin Later")
        if x==4:
            break
def Front():
    while True:
         print("BookMyShow")
         print("1:Sign In")
         print("2:Login")
         print("3:leave")
         x=int(input("Sign In or Login(1 or 2) "))
         if x==1:
              c.execute("Use Pvr")   
              c.execute("select user from users")
              us=c.fetchall()
              f,name,p,un=createac(us)
              if f!=0:
                   c.execute(f)
                   sq.commit()
                   if un!="johnyohan":
                       log(un)
                   else:
                       admin(un)
         elif x==2:
              c.execute("Use pvr")
              un=input("Enter Your Username ")
              un=un.lower()
              c.execute("select user from users")
              ch=c.fetchall()
              c.execute("select user from users where admin=1")
              adms=c.fetchall()
              if (un,) in ch:   
                   p=input("Enter Your Password ")
                   c.execute("select pass from users where user='{}'".format(un))
                   cp=c.fetchone()
                   if (p,)==cp:
                        log(un)
                   else:
                        print("Password Is Incorrect")
              else:
                    print("User Does Not Exist ")
         elif x==3:
             break
         else:
             print("Pls Enter A Valid Option")         
    print("Ok Bye")
Front()
