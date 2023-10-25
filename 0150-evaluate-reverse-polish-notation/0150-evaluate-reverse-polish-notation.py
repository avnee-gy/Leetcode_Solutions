class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for i in tokens:
            if(i =='+'):
                st.append(int(st.pop())+int(st.pop()))
            elif(i =='-'):
                a, b = int(st.pop()),int(st.pop())
                st.append(b-a)
            elif(i =='*'):
                st.append(int(st.pop())*int(st.pop()))
            elif(i =='/'):
                a,b = int(st.pop()),int(st.pop())
                st.append(int(b/a))
            # print(i)
            else:
                st.append(int(i))
        
        return st.pop()
        # return 1