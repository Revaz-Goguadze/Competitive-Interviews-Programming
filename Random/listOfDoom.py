def listOfDoom(lista):
    #?Convertir String a lista
    lista = lista.replace("->",",")
    lista = lista.split(",")

    #?Crea una lista auxiliar para quitar repetidos
    aux = []
    for elemento in lista:
        elemento = int(elemento)
        if elemento not in aux:
            aux.append(elemento)
    aux.sort()
    return '->'.join(str(x) for x in aux)






print(listOfDoom("1->1->1->1,1->2->2->2,3->3->4->4"))