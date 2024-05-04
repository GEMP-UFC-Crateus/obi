def verifica_balanco_parenteses(expressao):
    qts_p = 0

    # Se comecar com uma parentese que fecha já ta errado
    if expressao[0] == ')':
        return False

    # Enquanto a string não acabar ou qts for > 0
    for char in expressao:
        # Se for um que abre, incrementa;
        if char == '(':
            qts_p += 1

        # Se for um que fecha, decrementa;
        if char == ')':
            qts_p -= 1

        # se tiver mais parenteses que fecha o qts vai ser negativo e ai ele dar o break no for e retorna false
        if qts_p < 0:
            break

    if qts_p == 0:
        return True
    else:
        return False
        
        
while True:
    try:
        expressao = input()
        if not expressao:
            break

        if verifica_balanco_parenteses(expressao):
            print("correct")
        else:
            print("incorrect")
            
    except EOFError:
        break
