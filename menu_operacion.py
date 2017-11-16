def suma(num1,num2):
    resp=num1+num2
    return respuesta
def menu_operacion():
    seguir="si"
    num1=input("Dime un numero:")
    num2=input("Dime otro numero:")
    while (seguir=="si"):
        print "Que deseas hacer con los numeros:"
        print "1.Sumarlos"
        print "2.Restarlos"
        print "3.Multriplicarlos"
        print "4.Dividirlos"
        respuesta=input()
        if(respuesta==1):
            suma=num1+num2
            print num1,"+",num2,"=",suma
        if(respuesta==2):
            resta=num1-num2
            print num1,"-",num2,"=",resta
        if(respuesta==3):
            multiplicacion=num1*num2
            print num1,"*",num2,"=",multiplicacion
        if(respuesta==4):
            division=num1/num2
            print num1,"/",num2,"=",division
        print raw_input("Quieres seguir?")
menu_operacion()       
