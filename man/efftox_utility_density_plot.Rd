% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/efftox_utility_density_plot.R
\name{efftox_utility_density_plot}
\alias{efftox_utility_density_plot}
\title{Plot densities of EffTox dose utilities}
\usage{
efftox_utility_density_plot(fit, doses = NULL)
}
\arguments{
\item{fit}{An instance of \code{efftox_fit}.}

\item{doses}{optional, vector of integer dose-levels to plot. E.g. to plot
only dose-levels 1, 2 & 3 (and suppress the plotting of any other doses), use
\code{doses = 1:3}}
}
\value{
an instance of \code{ggplot}. Omit assignment to just view the plot.
}
\description{
Plot densities of EffTox dose utilities. Optionally plot only a
subset of the doses by specifying the \code{doses} parameter. This function
requires ggplot2 be installed.
}
\note{
This function requires that ggplot2 be installed.
}
\examples{
fit <- stan_efftox_demo('1N 2E 3B')
efftox_utility_density_plot(fit) + ggplot2::ggtitle('My doses')  # Too busy?
# Specify subset of doses to make plot less cluttered
efftox_utility_density_plot(fit, doses = 1:3) + ggplot2::ggtitle('My doses')

}
