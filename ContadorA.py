def contador_vocales():
    palabra=raw_input("Dime una palabra")
    suma=0 
    for cont in range (0,len(palabra),1):
        if palabra[cont]=='A':
            suma=suma+1
        if palabra[cont]=='a':
            suma=suma+1
        if palabra[cont]=='E':
            suma=suma+1
        if palabra[cont]=='e':
            suma=suma+1
        if palabra[cont]=='I':
            suma=suma+1
        if palabra[cont]=='i':
            suma=suma+1
        if palabra[cont]=='O':
            suma=suma+1
        if palabra[cont]=='o':
            suma=suma+1
        if palabra[cont]=='U':
            suma=suma+1
        if palabra[cont]=='u':
            suma=suma+1
        print 'En la palabra', palabra, 'hay', suma,'vocales'
contador_aes()
