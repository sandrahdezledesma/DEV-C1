def clasificador():
    num=input("Dime un numero")
    if num%2==0:
        if num%3==0:
            print "Verde"
        else:
            print "Rojo"
    else:
        if num%3==0:
            print "Azul"
        else:
            print "Negro"
clasificador()
