#include <iostream>
#include <vector>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/min.hpp>
#include <boost/accumulators/statistics/max.hpp>
using namespace boost::accumulators;

int main() {
  std::vector<double> data{1.0, 2.0, 3.0};
  accumulator_set<double, features<tag::min, tag::mean, tag::max > > acc;
  acc = std::for_each(data.begin(), data.end(), acc);
  std::cout << "Min  : " << min(acc) << std::endl;
  std::cout << "Mean : " << mean(acc) << std::endl;
  std::cout << "Max  : " << max(acc) << std::endl;
  return 0;
}
