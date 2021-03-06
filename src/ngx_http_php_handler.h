/**
 *    Copyright(c) 2016 rryqszq4
 *
 *
 */


#ifndef NGX_HTTP_PHP_HANDLER_H
#define NGX_HTTP_PHP_HANDLER_H

#include <nginx.h>
#include <ngx_http.h>

#include "ngx_http_php_module.h"

// handler
//ngx_int_t ngx_http_php_init_handler(ngx_conf_t *cf, ngx_http_php_main_conf_t *pmcf);

ngx_int_t ngx_http_php_rewrite_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_rewrite_file_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_rewrite_inline_handler(ngx_http_request_t *r);

ngx_int_t ngx_http_php_access_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_access_file_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_access_inline_handler(ngx_http_request_t *r);

ngx_int_t ngx_http_php_content_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_content_file_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_content_inline_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_content_post_handler(ngx_http_request_t *r);

ngx_int_t ngx_http_php_content_async_handler(ngx_http_request_t *r);
ngx_int_t ngx_http_php_content_async_inline_handler(ngx_http_request_t *r);
void *ngx_http_php_async_inline_thread(void *arg);

ngx_int_t ngx_http_php_content_sync_inline_handler(ngx_http_request_t *r);
void *ngx_http_php_sync_inline_thread(void *arg);

ngx_int_t ngx_http_php_set_inline_handler(ngx_http_request_t *r, ngx_str_t *val, ngx_http_variable_value_t *v, void *data);
ngx_int_t ngx_http_php_set_run_inline_handler(ngx_http_request_t *r, ngx_str_t *val, ngx_http_variable_value_t *v, void *data);
ngx_int_t ngx_http_php_set_file_handler(ngx_http_request_t *r, ngx_str_t *val, ngx_http_variable_value_t *v, void *data);
ngx_int_t ngx_http_php_set_run_file_handler(ngx_http_request_t *r, ngx_str_t *val, ngx_http_variable_value_t *v, void *data);

#endif