/**
 *    Copyright(c) 2016 rryqszq4
 *
 *
 */

#ifndef _PHP_NGX_SOCKET_TCP_H
#define _PHP_NGX_SOCKET_TCP_H

#include <ngx_http.h>
 
#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>

static zend_class_entry *php_ngx_socket_tcp_class_entry;

PHP_METHOD(ngx_socket_tcp, __construct);
PHP_METHOD(ngx_socket_tcp, connect);
PHP_METHOD(ngx_socket_tcp, send);
PHP_METHOD(ngx_socket_tcp, receive);
PHP_METHOD(ngx_socket_tcp, close);

void php_ngx_socket_tcp_init(int module_number TSRMLS_DC);

#endif