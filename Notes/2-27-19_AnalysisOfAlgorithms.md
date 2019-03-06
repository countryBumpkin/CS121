# Algorithm Analysis (Big-O Value) #

* How fast?
* What to measure:
  * Instructions
  * Loops

## Goals ##
* Characterize algorithm efficiency (time and space utilization) in terms of size of input
* Implementation independent (when possible)
* Ignore implementation dependent constants
* Ignore finite number of special cases

## Useful Rules ##
* Additive constants don't matter (so, throw them out)
* Multiplicative constants don't matter (so, throw them out)
* Only dominant terms (in sums) matter (throw out the rest)

## Examples: ##
    4N + 5
      O(N) = N

      7N + 2log(N) + 2N^2
        O(N) = N + log(N) + N^2

## Growth Rates ##
* O(1) = Constant
* O(logN) = Logarithmic
* O(N) = Linear
* O(N^2) = Quadratic
* O(2^N) = Exponential (Big Trouble)
