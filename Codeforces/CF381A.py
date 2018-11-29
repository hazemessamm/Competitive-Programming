number = int(input())
cards = list(map(int, input().split()))
sereja = 0
dima = 0
"""
for i in range(number):
    if len(cards)!=0:
        sereja += max(cards)
        cards.remove(max(cards))
        dima += max(cards)
        cards.remove(max(cards))
"""
for i in range(number):
    if len(cards) != 0:
        if len(cards) == 0:
            break
        else:
            if cards[0] > cards[-1]:
                sereja += cards[0]
                del(cards[0])
            else:
                sereja += cards[-1]
                del(cards[-1])
        if len(cards) == 0:
            break;
        else:
            if cards[0] > cards[-1]:
                dima += cards[0]
                del(cards[0])
            else:
                dima += cards[-1]
                del(cards[-1])
    else:
        break
print(sereja,dima)
