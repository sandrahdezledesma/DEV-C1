def sumadeimpares():
    impares=0
    numero=input("Dime un numero")
    while numero>1:
        cifra=numero%10
        if cifra%2!=0:
            impares=impares+1
        numero=numero/10
    print "Tiene ", impares," cifras impares"
sumadeimpares()
