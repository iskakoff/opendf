#pragma once 

#include <boost/math/special_functions.hpp>
#include <Eigen/Core>
#include <gftools.hpp> 
#include "hdf5.hpp"

namespace open_df { 
    typedef Eigen::MatrixXcd matrix_type; 
    using namespace gftools; 
    using boost::math::pow;
    using gftools::tools::is_float_equal;
}

