def sumadepares():
    pares=0
    numero=input("Dime un numero")
    while numero>1:
        cifra=numero%10
        if cifra%2==0:
            pares=pares+1
        numero=numero/10
    print "Tiene ", pares," cifras pares"
sumadepares()
