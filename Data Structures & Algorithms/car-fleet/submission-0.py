class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = [(pos , (target - pos) /spd)for pos,spd in zip(position ,speed)]

        cars.sort(reverse = True)
        fleets = 0
        stack = []

        for pos,time in cars :
            if stack and time <=stack[-1]:
                continue
            else:
                stack.append(time)
        

        return len(stack)

