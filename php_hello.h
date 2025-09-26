#ifndef PHP_HELLO_H
#define PHP_HELLO_H

extern zend_module_entry hello_module_entry;
#define phpext_hello_ptr &hello_module_entry

PHP_FUNCTION(hello_world);

#endif /* PHP_HELLO_H */
