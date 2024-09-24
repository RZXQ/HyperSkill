# 三种动物共18只,他们有20对翅膀,118条腿。
# 其中蜘蛛是0对翅膀8条腿,蜻蜓是2对翅膀6条腿,蝉有1对翅膀6条腿.三种动物各有多少只?
# 蜘蛛(spider)、蜻蜓(dragonfly)、蝉(cicada)
for s in range(1, 17):
    for d in range(1, 17):
        for c in range(1, 17):
            if s + d + c == 18 and 2 * d + c == 20 and 8 * s + 6 * d + 6 * c == 118:
                print('蜘蛛', s, '只')
                print('蜻蜓', d, '只')
                print('蝉', c, '只')
