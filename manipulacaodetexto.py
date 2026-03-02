#FATIAMENTO/dividido DE FRASE/TEXTO, OS PARAMETROS são basicamente a posição das letras 
# de forma respectiva, separadas por dois pontos :
frase = 'curso em video python'
print (frase[1:15:2])

print(frase.count('u')) #letra maiuscula e minuscula não são iguais

print (len(frase)) #conta quantos caracteres existem na frase ou objeto, incluindo os espaços sem salvar, ou seja, só nessa instância

print(frase.replace('python', 'java')) #como a propria extensão já fala, ele troca nomes de lugar, substitui ne

print('curso' in frase) #consigo verificar se tem x palavra na frase ou objeto 
print (frase.find('r')) #ele retorna na posição em que o objeto se encontra na frase e quando não existe, retorna como -1

dividido = frase.split() 
print(dividido[2]) 
#seleciona o objeto q se encontra na segunda posição e seleciona a 3 posição no objeto

#separa a frase em lista, por eempo, 'curso' 'em' 'video' 'python' 
#e tbm pode usar os parametros para mostrar as posições
 

#as strings e seus micro elementos são imutáveis, a não ser q utilize uma função de string e faça
#uma atribuição
#ai tem outra forma também que é alem dos dois parametros, um terceiro.
#começa em x vai até y mas vai pulando de z em z, por 
# ex:. (frase[3:9:2]) começa em 3 e vai até 9 mas pula as letras de 2 em 2
#obs: quando fica algum parametro em branco, se assume o resto da frase ou o começo
# e três aspas não é comentário, é um comentário dentro do print(exemplo)
#no python tudo eh objeto, ou seja, posso adicionar sempre algo como 
#.count é para contar quantos vezes aparece determinada letra ou 'coisa' na frase ou objeto

