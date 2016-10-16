//
//  NSString+Password
//  NBCategories
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

///提供加密功能
@interface NSString (Password)

/**
 *  32位MD5加密
 */
@property (nonatomic,copy,readonly) NSString *md5;
/**
 *  SHA1加密
 */
@property (nonatomic,copy,readonly) NSString *sha1;

@end
