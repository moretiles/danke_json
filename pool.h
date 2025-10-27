/*
 * pool.h -- Pool allocator used to reserve memory
 *
 * danke_json - Another tool for working with JSON in C
 * https://github.com/moretiles/danke_json
 * Project licensed under Apache-2.0 license
 */

#include "ds.h"

#include <stddef.h>
#include <stdint.h>

// pool
int init_pool(struct json_pool *pool, size_t size);
int destroy_pool(struct json_pool *pool);
struct json_pool *double_pool(struct json_pool **pool);
