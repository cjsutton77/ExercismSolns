#include "space_age.h"
namespace space_age {
    unsigned long long space_age::seconds() const
        {
        return age;
    }
    double space_age::on_earth() const
    {
        return (1./1.)*(double)age/(double)31557600 ;
    }
    double space_age::on_mercury() const
    {
        return (1./0.2408467)*(double)age/(double)31557600 ;
    }
        double space_age::on_venus() const
    {
        return (1./0.61519726)*(double)age/(double)31557600 ;
    }
    double space_age::on_mars() const
    {
        return (1./1.8808158)*(double)age/(double)31557600 ;
    }
    double space_age::on_jupiter() const
    {
        return (1./11.862615)*(double)age/(double)31557600 ;
    }
    double space_age::on_saturn() const
    {
        return (1./29.447498)*(double)age/(double)31557600 ;
    }
    double space_age::on_uranus() const
    {
        return (1./84.016846)*(double)age/(double)31557600 ;
    }
    double space_age::on_neptune() const
    {
        return (1./164.79132 )*(double)age/(double)31557600 ;
    }
 }