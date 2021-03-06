% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/crm_fit.R
\docType{class}
\name{crm_fit-class}
\alias{crm_fit-class}
\alias{crm_fit}
\title{Class of model fit by \pkg{trialr} using the CRM dose-finding design.}
\usage{
crm_fit(
  dose_indices,
  num_patients,
  doses,
  tox,
  weights,
  prob_tox,
  median_prob_tox,
  prob_mtd,
  recommended_dose,
  dat,
  fit,
  samples = NULL
)
}
\arguments{
\item{dose_indices}{A vector of integers representing the dose-levels under
consideration.}

\item{num_patients}{Integer, the number of patients analysed.}

\item{doses}{vector of integers representing the dose given to the patients.}

\item{tox}{vector of integers representing the toxicity status of the
patients.}

\item{weights}{Vector of numeric weights for the observations for patients
1:num_patients, thus facilitating the TITE-CRM design.}

\item{prob_tox}{The posterior mean probabilities of toxicity at doses 1:n;
a vector of numbers between 0 and 1.}

\item{median_prob_tox}{The posterior median probabilities of toxicity at doses
1:n; a vector of numbers between 0 and 1.}

\item{prob_mtd}{The posterior probability that each dose is the MTD, by the
chosen model; a vector of numbers between 0 and 1. This probability reflects
the uncertainty remaining in the parameter distributions, whereas
\code{prob_tox} and \code{median_prob_tox} do not.}

\item{recommended_dose}{An integer representing the dose-level that is
recommended for the next patient or cohort. Contrast to
\code{modal_mtd_candidate}.}

\item{dat}{Object \code{\link{crm_params}} containing data passed to
\code{\link[rstan:sampling]{sampling}}.}

\item{fit}{An object of class \code{\link[rstan:stanfit]{stanfit}},
containing the posterior samples.}

\item{samples}{An optional \code{data.frame} like object of samples.}
}
\description{
Class of model fit by \pkg{trialr} using the CRM dose-finding design.
}
\details{
See \code{methods(class = "crm_fit")} for an overview of available
methods.
}
\seealso{
\code{\link{stan_crm}}
}
