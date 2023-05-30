er = int(input())
eg = int(input())
eb = int(input())

qtd_r = 1

qtd_g = (er // eg)**2
qtd_b = ((eg // eb)**2) * qtd_g

qtd_t = qtd_r + qtd_g + qtd_b

print(qtd_t)
