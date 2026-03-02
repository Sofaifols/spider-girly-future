#for <variavel> in <sequencia>:
#    bloco que será repetido para todos os itens da sequencia
#instrução fora do for

#for item in range (2, 9, 3):
#    print (item) 


#for numero in range (11):
 #   print(numero)

"""numero = 5
for i in range (1,11):
    resultado = numero*i
    print(f'{numero} x {i} = {resultado}')    #tabuadar de 5 """

#for com stringgggggg
"""nome = input('Entre com seu nome: \n')
for letra in nome:
    print(letra)"""

"""texto = "programação"
letra_para_contar = "a"
contador = 0

for letra in texto:
    if letra == letra_para_contar:
        contador +=1
print(f'A letra"{letra_para_contar}" aparece {contador} vezes na palavra "{texto}"')  #f, formated string para inserir valor
#de variaveis, expressoes ou resultados de funções diretamente dentro de um texto de forma dinamica (formatação)"""

s = 0
for i in range(5):
    s += 3*i
print(s)