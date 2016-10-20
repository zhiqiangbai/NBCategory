//
//  NSDictionary+NBDictionary.h
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/5/11.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (NBDictionary)
/**
 *  解决插入null的问题
 *
 *  @param key 字典key
 *
 *  @return <#return value description#>
 */
- (id)objectForKeyNotNull:(id)key;

@end
