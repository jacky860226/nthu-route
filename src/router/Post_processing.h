#ifndef _Post_processing_H_
#define _Post_processing_H_

#include "misc/geometry.h"

#define error_bound 0.00000000001
#define neg_error_bound -0.00000000001

typedef struct
{
	int id;
	double total_overflow;
	int bsize;
}COUNTER;

extern bool check_path_no_overflow(vector<Jm::Coordinate_2d*> *path,
                                   int net_id,
                                   int inc_flag);

extern void compute_path_total_cost_and_distance(
        Two_pin_element_2d *element,
        Monotonic_element*);
#endif
