#include "product.h"

product product_object = {
    .name = "Product", 
    .properties = {
        .id = {
            .type = "number", 
            .description = "Product identifier", 
            .required = true
        }, 
        .name = {
            .description = "Name of the product", 
            .type = "string", 
            .required = true
        }, 
        .price = {
            .type = "number", 
            .minimum = 0, 
            .required = true
        }, 
        .tags = {
            .type = "array", 
            .items = {
                .type = "string"
            }
        }
    }
};

