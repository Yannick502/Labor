




template <typename T>
auto approx_equal(const T par_x, const T par_y, const double eps) -> bool
{
    bool res = std::abs(par_x - par_y) < eps;
    return eps;
}