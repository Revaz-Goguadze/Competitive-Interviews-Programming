


inputArray = ["abc",
              "",
              "aaa",
              "a",
              "zz"]



for i in range(len(inputArray)):
        for j in range(0, len(inputArray)-i-1):   
            if len(inputArray[j]) > len(inputArray[j+1]) : 
                inputArray[j], inputArray[j+1] = inputArray[j+1], inputArray[j] 
return inputArray

print(inputArray)
