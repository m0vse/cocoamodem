//
//  SubDictionary.h
//  cocoaModem 2.0
//
//  Created by Kok Chen on 11/10/09.
//  Copyright 2009 Kok Chen, W7AY. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface SubDictionary : NSObject {
	NSMutableDictionary *dict ;
}

- (NSMutableDictionary*)dictionary ;

- (int)intValueForKey:(NSString*)key ;
- (float)floatValueForKey:(NSString*)key ;

- (void)setInt:(int)value forKey:(NSString*)key ;
- (void)setFloat:(float)value forKey:(NSString*)key ;


@end
