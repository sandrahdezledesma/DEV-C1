def dime_out_post():
    numero=input ("Dime un numero:")
    for cont in range(numero-3,numero,1):
        print cont,
    for cont in range(numero+1,numero+4,1):
        print cont,
dime_out_post()
