#include "BinomialTree.h"
#include <iostream>

using std::cout;
using std::endl;

BinomialTree::BinomialTree(double S, double rate, 
	double vol, double time, int steps)
  : S0_(S),
	r_(rate),
	v_(vol),
	T_(time),
	N_(steps)
{
	// Precalculations
	dt_ = T_ / N_;
	nu_ = r_ - 0.5*v_*v_;
	disc_ = exp(-r_*dt_);
	sqrt_dt_ = sqrt(dt_);

	buildTree();
}

void BinomialTree::buildTree()
{
	// Step 1
	//Create/initialize the Tree

	//we have N+1 time steps, i.e. N+1 vectors for each time step
	//"resize" the container to make room for (N+1) vectors
	tree_.resize(N_ + 1);  

	//the "i"th vector should have (i+1) Nodes where i is the time index
	for (long i = 0; i <= N_; i++)
	{
		tree_[i].resize(i + 1);
	}
	
	// Step 2
	//Populate stock prices
	//we access the first and second elements in a pair using first and second fields
	tree_[0][0].S = S0_;
	
	//i: is horizontal time index
	//we go from left to right
	for (int i = 1; i <= N_; i++)
	{
		//WRITE_CODE TO POPULATE THE STOCK PRICE AT OTHER NODES 
	}
}

double BinomialTree::Price(const Option &option)
{
	// Step 3
	//Calculate option payoffs at t=T
    //j is vertical index: goes from 0 to N because we have N+1 nodes
	for (int j = 0; j < N_ + 1; ++j)
	{
		tree_[N_][j].C = WRITE_CODE;
	}

	// Step 4
	//Back propagation
	//ir is index i in reverse direction (we go from right to left)
	for (int ir = N_ - 1; ir >= 0; --ir)
	{
        //inner loop to populate option payoffs at each time index
		for (int j = 0; j <= ir; ++j)
		{
			//use Equation 8 to find the discounted expected payoff using 
			//two adjacent option prices
			double discountedExpectedPayoff = WRITE_CODE; 

			//We also need the stock price at the node for path dependant options.
			double St = WRITE_CODE;
			//find the payoff at the node. 
			tree_[ir][j].C = WRITE_CODE;	                                          
		}
	}

	//return the option price
	return WRITE_CODE;
}

