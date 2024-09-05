class CuentaBancaria:

    def __init__(self,nombre,saldo): #constructor
        self.nombre=nombre
        self.saldo=saldo
    def depositar(self,cantidad):
        self.saldo+=cantidad
    def retirar(self,cantidad):
        if cantidad>self.saldo:
            raise ValueError("Saldo Insuficiente, pruebe con", self.saldo)
        else:
            self.saldo-=cantidad
    def __str__(self):   #metodo str sobreescribe una clase para devolver el objeto como una cadena de caracteres
        return f"Cuenta bancaria de {self.nombre}. Saldo: {self.saldo}"

cuenta1=CuentaBancaria("Vanessa",25000)
cuenta2=CuentaBancaria("Alex",5000)
cuenta3=CuentaBancaria("Veronica",3600)

print(cuenta1)
print(cuenta2)
print(cuenta3)
cuenta3.depositar(500)
cuenta1.depositar(1200)
cuenta2.depositar(2500)
print(cuenta1)
print(cuenta2)
print(cuenta3)
cuenta1.retirar(100)
cuenta2.retirar(100)
cuenta3.retirar(100)
print(cuenta1)
print(cuenta2)
print(cuenta3)