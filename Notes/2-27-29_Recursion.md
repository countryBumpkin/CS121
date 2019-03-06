# Recursion #
* What is recursion?
  *Function that uses itself*
* Why is it so useful?
  *Natural formulation for many problems*
* How is it like induction?
  *Base case and a general case*
* When should we use recursion?
  *When it works, with the constraints on time and memory*

## Recursion In Trees ##
Using recursion to print the data in a binary search tree

    void PrintTree(TreeNode* t){
      if(t != NULL){ // Check that node is valid
        PrintTree(t->left);

        cout << t->data;

        PrintTree(t->right);
      }
    }

_**Example:**_
  Factorial functions are easily expressed as a factorial function like so

    int Factorial(int n){
      if(n == 1 || n == 0){
        return 1;
      }else{
        return n * Factorial(n-1);
      }
    }

Print Decimal

    void PrintDecimal( int n ){
      if(n < 10){
        cout << n << endl;
      }else{
        PrintDecimal(n/10);
        cout << (n % 10) << endl;
      }
    }
