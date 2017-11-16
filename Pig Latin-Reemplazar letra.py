def pig_latin():
    print "Dime un texto"
    texto=raw_input()
    mensaje1=texto
    mensaje1=mensaje1.replace("a", "u")
    mensaje1=mensaje1.replace("e", "u")
    mensaje1=mensaje1.replace("i", "u")
    mensaje1=mensaje1.replace("o", "u")
    print mensaje1
pig_latin()
