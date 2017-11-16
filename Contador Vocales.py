def contador_vocales():
    palabra=raw_input("Dime una palabra")
    suma_a=0
    suma_e=0
    suma_i=0
    suma_o=0
    suma_u=0
    for cont in range (1,len(palabra),1):
        print palabra[cont]
        if palabra[cont]=='a':
            suma_a=suma_a+1
        if palabra[cont]=='e':
            suma_e=suma_e+1
        if palabra[cont]=='i':
            suma_i=suma_i+1
        if palabra[cont]=='o':
            suma_o=suma_o+1
        if palabra[cont]=='u':
            suma_u=suma_u+1
    print 'hay',a,'a',e,'e',i,'i',o,'o',u,'u'
        
contador_vocales()
