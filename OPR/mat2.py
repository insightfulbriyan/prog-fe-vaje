pStep = [[0, 0, 0]]

n = int(input("Korak"))
for _ in range(n):
    step = []
    for s in pStep:
        l = s.copy()
        m = s.copy()
        r = s.copy()

        l[0] = (l[0] + 1)%2
        m[1] = (m[1] + 1)%2
        r[2] = (r[2] + 1)%2

        step.append(l)
        step.append(m)
        step.append(r)

    pStep = step.copy()

    print(pStep)