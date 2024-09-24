# 题目三：一队强盗一队狗二队并作一队走，数头一共三百六，数腿一共八百九，多少强盗多少狗？
for robber in range(1, 360):
    for dog in range(1, 360):
        if robber + dog == 360 and 2 * robber + 4 * dog == 890:
            print('强盗', robber, '人')
            print('狗', dog, '只')
