def vocales():
    palabra=input("Dime una palabra")
    suma_a=0
    suma_e=0
    suma_i=0
    suma_o=0
    suma_u=0
    for cont in range(1, len(palabra),1):
        if palabra[cont]=='a' or palabra[cont]=='A':
            suma_a=suma+1
        if palabra[cont]=='e' or palabra[cont]=='E':
            suma_e=suma+1
        if palabra[cont]=='i' or palabra[cont]=='I':
            suma_i=suma+1
        if palabra[cont]=='o' or palabra[cont]=='O':
            suma_o=suma+1
        if palabra[cont]=='u' or palabra[cont]=='U':
            suma_u=suma+1
  print "La palabra", palabra,"tiene",cont,"letras"
  print"de las cuales", suma, "son vocales y", cont_suma,"son consonantes"
