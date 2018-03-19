#ifndef __COEFFMATRIX_H__
#define __COEFFMATRIX_H__

#include "Constant.h"
#include "Object.h"
#include "CoeffItem.h"

#include <vector>
#include <Eigen/Sparse>
#include <Eigen/Dense>

class CoeffMatrix
{
private:
  int rate = 2;
  int eq_num = 0;
  int now_eq_num = 0;
  Eigen::SparseMatrix<double, Eigen::RowMajor> coeff_mat;
  Eigen::VectorXd coeff_b;
 private:
  void computeEquationNum(const std::vector<ElementType>& f_type, const std::vector<ElementType>& n_type);
 public:
  CoeffMatrix() {}
  void init(const std::vector<ElementType>& f_type, const std::vector<ElementType>& n_type);
  void put(const CoeffItem& item);
  void solve(Eigen::VectorXd& x);
};

#endif
