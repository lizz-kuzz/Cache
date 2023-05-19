#pragma once

typedef int keyT;

struct cache_t;

typedef struct cache_t cache_t;

cache_t *cache_create(int size);

void cache_free(cache_t *cache);

int cache_space(cache_t *cache);

int cache_lookup_update(cache_t *cache, keyT key, int size, int time);

void cache_dump(cache_t *cache);