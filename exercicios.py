'''print ('========ex.1=======')
nome=input('QUAL SEU NOME?')
print ('olá',nome,'! Prazer')'''


'''print('---ex. 02---')
print('Digite sua data de nascimento')
dia=input('Dia =')
mes=input('Mês =')
ano=input('Ano =')
print('Você nasceu no dia', dia,'de',mes,'do ano de',ano,'.','Correto?')'''

'''print('--ex.3-- somar números')
n1=int(input('Digite o primeiro número:'))#especificar o tipo da variavel
n2=int(input('Digite o segundo número:'))
s=n1+n2
print('A soma dos números {} e {} vale {}'.format(n1,n2, s)) '''
#print('A soma é:{}'.format(s)) #essa eh mais chatinha, mas acredito que mais "elaborada?"
#print ('converta um numero inteiro para float')
#n = bool(input('Digite o número escolhido:'))
#print (n)
#print (type(n))
#print(n)
# 'is' é uma função que permite tipo uma pergunta pra variável em questão,
#por exemplo, isnumeric? ai no caso se for número aparece True, ou isalpha
#se for letra True, se for numero False, exemplo abaixo

#n = input('Digite algo:') #não especifiquei o tipo da variavel no começo
#print (n.isalpha()) #colocar o nome da variavel, ponto seguida da 'pergunta', ex se a variavel faz parte do alfabeto
#print(n.isnumeric()) #exemplo se a variavel é numero
#print(n.isalnum()) #exemplo se a variavel é alphanumerica, ou seja, se tem letras e numeros
#print(n.isupper()) #exemplo se a variavel está toda em letra maiuscula


'''print('---exercicio para somar dois números---')
n1 =int(input('Digite um número:'))
n2= int(input('Digite outro número:'))
s = n1+n2
print('A soma dos números {}+{} = {}'.format (n1,n2,s))'''

print ('---exercicio para "dissecar" uma variavel :p ---' )
x = input('Digite algo:')
print('O tipo primitivo desse valor é:\n',  type(x))
print('Só tem espaços?\n', x.isspace())
print('É um número?\n', x.isnumeric())
print('É alfabético?\n', x.isalpha())
print('É alfanumerico?\n', x.isalnum())
print('Está em maiusculo?\n', x.isupper())
print('Está em minusculo?\n', x.islower())
print('Está capitalizada?\n', x.istitle())
#print(n.is)




