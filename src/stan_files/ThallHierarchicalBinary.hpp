/*
    trialr is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    trialr is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with trialr.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.19.1

#include <stan/model/model_header.hpp>

namespace model_ThallHierarchicalBinary_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_ThallHierarchicalBinary");
    reader.add_event(47, 45, "end", "model_ThallHierarchicalBinary");
    return reader;
}

#include <meta_header.hpp>
 class model_ThallHierarchicalBinary : public prob_grad {
private:
        int num_groups;
        std::vector<int> group_responses;
        std::vector<int> group_sizes;
        double mu_mean;
        double mu_sd;
        double tau_alpha;
        double tau_beta;
public:
    model_ThallHierarchicalBinary(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_ThallHierarchicalBinary(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_ThallHierarchicalBinary_namespace::model_ThallHierarchicalBinary";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            // initialize data block variables from context__
            current_statement_begin__ = 10;
            context__.validate_dims("data initialization", "num_groups", "int", context__.to_vec());
            num_groups = int(0);
            vals_i__ = context__.vals_i("num_groups");
            pos__ = 0;
            num_groups = vals_i__[pos__++];
            check_greater_or_equal(function__, "num_groups", num_groups, 1);

            current_statement_begin__ = 11;
            validate_non_negative_index("group_responses", "num_groups", num_groups);
            context__.validate_dims("data initialization", "group_responses", "int", context__.to_vec(num_groups));
            group_responses = std::vector<int>(num_groups, int(0));
            vals_i__ = context__.vals_i("group_responses");
            pos__ = 0;
            size_t group_responses_k_0_max__ = num_groups;
            for (size_t k_0__ = 0; k_0__ < group_responses_k_0_max__; ++k_0__) {
                group_responses[k_0__] = vals_i__[pos__++];
            }
            size_t group_responses_i_0_max__ = num_groups;
            for (size_t i_0__ = 0; i_0__ < group_responses_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "group_responses[i_0__]", group_responses[i_0__], 0);
            }

            current_statement_begin__ = 12;
            validate_non_negative_index("group_sizes", "num_groups", num_groups);
            context__.validate_dims("data initialization", "group_sizes", "int", context__.to_vec(num_groups));
            group_sizes = std::vector<int>(num_groups, int(0));
            vals_i__ = context__.vals_i("group_sizes");
            pos__ = 0;
            size_t group_sizes_k_0_max__ = num_groups;
            for (size_t k_0__ = 0; k_0__ < group_sizes_k_0_max__; ++k_0__) {
                group_sizes[k_0__] = vals_i__[pos__++];
            }
            size_t group_sizes_i_0_max__ = num_groups;
            for (size_t i_0__ = 0; i_0__ < group_sizes_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "group_sizes[i_0__]", group_sizes[i_0__], 0);
            }

            current_statement_begin__ = 15;
            context__.validate_dims("data initialization", "mu_mean", "double", context__.to_vec());
            mu_mean = double(0);
            vals_r__ = context__.vals_r("mu_mean");
            pos__ = 0;
            mu_mean = vals_r__[pos__++];

            current_statement_begin__ = 16;
            context__.validate_dims("data initialization", "mu_sd", "double", context__.to_vec());
            mu_sd = double(0);
            vals_r__ = context__.vals_r("mu_sd");
            pos__ = 0;
            mu_sd = vals_r__[pos__++];
            check_greater_or_equal(function__, "mu_sd", mu_sd, 0.0);

            current_statement_begin__ = 19;
            context__.validate_dims("data initialization", "tau_alpha", "double", context__.to_vec());
            tau_alpha = double(0);
            vals_r__ = context__.vals_r("tau_alpha");
            pos__ = 0;
            tau_alpha = vals_r__[pos__++];
            check_greater_or_equal(function__, "tau_alpha", tau_alpha, 0);

            current_statement_begin__ = 20;
            context__.validate_dims("data initialization", "tau_beta", "double", context__.to_vec());
            tau_beta = double(0);
            vals_r__ = context__.vals_r("tau_beta");
            pos__ = 0;
            tau_beta = vals_r__[pos__++];
            check_greater_or_equal(function__, "tau_beta", tau_beta, 0);


            // initialize transformed data variables
            // execute transformed data statements

            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 24;
            num_params_r__ += 1;
            current_statement_begin__ = 25;
            num_params_r__ += 1;
            current_statement_begin__ = 26;
            validate_non_negative_index("rho", "num_groups", num_groups);
            num_params_r__ += (1 * num_groups);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_ThallHierarchicalBinary() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        current_statement_begin__ = 24;
        if (!(context__.contains_r("mu")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable mu missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("mu");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "mu", "double", context__.to_vec());
        double mu(0);
        mu = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(mu);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable mu: ") + e.what()), current_statement_begin__, prog_reader__());
        }

        current_statement_begin__ = 25;
        if (!(context__.contains_r("sigma2")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable sigma2 missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("sigma2");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "sigma2", "double", context__.to_vec());
        double sigma2(0);
        sigma2 = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0.0, sigma2);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable sigma2: ") + e.what()), current_statement_begin__, prog_reader__());
        }

        current_statement_begin__ = 26;
        if (!(context__.contains_r("rho")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable rho missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("rho");
        pos__ = 0U;
        validate_non_negative_index("rho", "num_groups", num_groups);
        context__.validate_dims("parameter initialization", "rho", "double", context__.to_vec(num_groups));
        std::vector<double> rho(num_groups, double(0));
        size_t rho_k_0_max__ = num_groups;
        for (size_t k_0__ = 0; k_0__ < rho_k_0_max__; ++k_0__) {
            rho[k_0__] = vals_r__[pos__++];
        }
        size_t rho_i_0_max__ = num_groups;
        for (size_t i_0__ = 0; i_0__ < rho_i_0_max__; ++i_0__) {
            try {
                writer__.scalar_unconstrain(rho[i_0__]);
            } catch (const std::exception& e) {
                stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable rho: ") + e.what()), current_statement_begin__, prog_reader__());
            }
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);

            // model parameters
            current_statement_begin__ = 24;
            local_scalar_t__ mu;
            (void) mu;  // dummy to suppress unused var warning
            if (jacobian__)
                mu = in__.scalar_constrain(lp__);
            else
                mu = in__.scalar_constrain();

            current_statement_begin__ = 25;
            local_scalar_t__ sigma2;
            (void) sigma2;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma2 = in__.scalar_lb_constrain(0.0, lp__);
            else
                sigma2 = in__.scalar_lb_constrain(0.0);

            current_statement_begin__ = 26;
            std::vector<local_scalar_t__> rho;
            size_t rho_d_0_max__ = num_groups;
            rho.reserve(rho_d_0_max__);
            for (size_t d_0__ = 0; d_0__ < rho_d_0_max__; ++d_0__) {
                if (jacobian__)
                    rho.push_back(in__.scalar_constrain(lp__));
                else
                    rho.push_back(in__.scalar_constrain());
            }

            // transformed parameters
            current_statement_begin__ = 30;
            local_scalar_t__ sigma;
            (void) sigma;  // dummy to suppress unused var warning
            stan::math::initialize(sigma, DUMMY_VAR__);
            stan::math::fill(sigma, DUMMY_VAR__);

            current_statement_begin__ = 31;
            validate_non_negative_index("prob_response", "num_groups", num_groups);
            std::vector<local_scalar_t__> prob_response(num_groups, local_scalar_t__(0));
            stan::math::initialize(prob_response, DUMMY_VAR__);
            stan::math::fill(prob_response, DUMMY_VAR__);

            // transformed parameters block statements
            current_statement_begin__ = 32;
            stan::math::assign(sigma, stan::math::sqrt(sigma2));
            current_statement_begin__ = 33;
            for (int i = 1; i <= num_groups; ++i) {

                current_statement_begin__ = 35;
                stan::model::assign(prob_response, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            inv_logit(get_base1(rho, i, "rho", 1)), 
                            "assigning variable prob_response");
            }

            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            current_statement_begin__ = 30;
            if (stan::math::is_uninitialized(sigma)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: sigma";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable sigma: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            check_greater_or_equal(function__, "sigma", sigma, 0.0);

            current_statement_begin__ = 31;
            size_t prob_response_k_0_max__ = num_groups;
            for (size_t k_0__ = 0; k_0__ < prob_response_k_0_max__; ++k_0__) {
                if (stan::math::is_uninitialized(prob_response[k_0__])) {
                    std::stringstream msg__;
                    msg__ << "Undefined transformed parameter: prob_response" << "[" << k_0__ << "]";
                    stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable prob_response: ") + msg__.str()), current_statement_begin__, prog_reader__());
                }
            }
            size_t prob_response_i_0_max__ = num_groups;
            for (size_t i_0__ = 0; i_0__ < prob_response_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "prob_response[i_0__]", prob_response[i_0__], 0.0);
                check_less_or_equal(function__, "prob_response[i_0__]", prob_response[i_0__], 1.0);
            }


            // model body

            current_statement_begin__ = 41;
            lp_accum__.add(normal_log<propto__>(mu, mu_mean, mu_sd));
            current_statement_begin__ = 42;
            lp_accum__.add(inv_gamma_log<propto__>(sigma2, tau_alpha, tau_beta));
            current_statement_begin__ = 43;
            lp_accum__.add(normal_log<propto__>(rho, mu, sigma));
            current_statement_begin__ = 44;
            lp_accum__.add(binomial_logit_log<propto__>(group_responses, group_sizes, rho));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("mu");
        names__.push_back("sigma2");
        names__.push_back("rho");
        names__.push_back("sigma");
        names__.push_back("prob_response");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(num_groups);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(num_groups);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_ThallHierarchicalBinary_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning

        // read-transform, write parameters
        double mu = in__.scalar_constrain();
        vars__.push_back(mu);

        double sigma2 = in__.scalar_lb_constrain(0.0);
        vars__.push_back(sigma2);

        std::vector<double> rho;
        size_t rho_d_0_max__ = num_groups;
        rho.reserve(rho_d_0_max__);
        for (size_t d_0__ = 0; d_0__ < rho_d_0_max__; ++d_0__) {
            rho.push_back(in__.scalar_constrain());
        }
        size_t rho_k_0_max__ = num_groups;
        for (size_t k_0__ = 0; k_0__ < rho_k_0_max__; ++k_0__) {
            vars__.push_back(rho[k_0__]);
        }

        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        if (!include_tparams__ && !include_gqs__) return;

        try {
            // declare and define transformed parameters
            current_statement_begin__ = 30;
            double sigma;
            (void) sigma;  // dummy to suppress unused var warning
            stan::math::initialize(sigma, DUMMY_VAR__);
            stan::math::fill(sigma, DUMMY_VAR__);

            current_statement_begin__ = 31;
            validate_non_negative_index("prob_response", "num_groups", num_groups);
            std::vector<double> prob_response(num_groups, double(0));
            stan::math::initialize(prob_response, DUMMY_VAR__);
            stan::math::fill(prob_response, DUMMY_VAR__);

            // do transformed parameters statements
            current_statement_begin__ = 32;
            stan::math::assign(sigma, stan::math::sqrt(sigma2));
            current_statement_begin__ = 33;
            for (int i = 1; i <= num_groups; ++i) {

                current_statement_begin__ = 35;
                stan::model::assign(prob_response, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            inv_logit(get_base1(rho, i, "rho", 1)), 
                            "assigning variable prob_response");
            }

            if (!include_gqs__ && !include_tparams__) return;
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            current_statement_begin__ = 30;
            check_greater_or_equal(function__, "sigma", sigma, 0.0);

            current_statement_begin__ = 31;
            size_t prob_response_i_0_max__ = num_groups;
            for (size_t i_0__ = 0; i_0__ < prob_response_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "prob_response[i_0__]", prob_response[i_0__], 0.0);
                check_less_or_equal(function__, "prob_response[i_0__]", prob_response[i_0__], 1.0);
            }

            // write transformed parameters
            if (include_tparams__) {
                vars__.push_back(sigma);
                size_t prob_response_k_0_max__ = num_groups;
                for (size_t k_0__ = 0; k_0__ < prob_response_k_0_max__; ++k_0__) {
                    vars__.push_back(prob_response[k_0__]);
                }
            }
            if (!include_gqs__) return;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_ThallHierarchicalBinary";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma2";
        param_names__.push_back(param_name_stream__.str());
        size_t rho_k_0_max__ = num_groups;
        for (size_t k_0__ = 0; k_0__ < rho_k_0_max__; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "rho" << '.' << k_0__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "sigma";
            param_names__.push_back(param_name_stream__.str());
            size_t prob_response_k_0_max__ = num_groups;
            for (size_t k_0__ = 0; k_0__ < prob_response_k_0_max__; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "prob_response" << '.' << k_0__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }

        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma2";
        param_names__.push_back(param_name_stream__.str());
        size_t rho_k_0_max__ = num_groups;
        for (size_t k_0__ = 0; k_0__ < rho_k_0_max__; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "rho" << '.' << k_0__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "sigma";
            param_names__.push_back(param_name_stream__.str());
            size_t prob_response_k_0_max__ = num_groups;
            for (size_t k_0__ = 0; k_0__ < prob_response_k_0_max__; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "prob_response" << '.' << k_0__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }

        if (!include_gqs__) return;
    }

}; // model

}  // namespace

typedef model_ThallHierarchicalBinary_namespace::model_ThallHierarchicalBinary stan_model;


#endif
