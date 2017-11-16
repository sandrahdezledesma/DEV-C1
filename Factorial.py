def factorial():
    x=input ("Dime un numero")
    fact=1
    for cont in range (1,x+1,1):
	    fact= fact*cont
    print "El factorial es", fact
factorial()
