#include <iostream>
#include <vector>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/weighted_sum.hpp>
#include <boost/accumulators/statistics/covariance.hpp>
#include <boost/accumulators/statistics/variates/covariate.hpp>
using namespace boost::accumulators;

int main()
{
  std::vector<double> data{1.0, 2.0, 3.0, 4.0};
  accumulator_set<double, features<tag::weighted_sum>, int> acc;
  acc(1, weight = 2);
  acc(2, weight = 4);
  acc(3, weight = 6);
  std::cout << sum(acc) << std::endl;
}
