//
//  CBButton.h
//  CosmicBlast
//
//  Created by Teddy Kitchen on 9/8/14.
//  Copyright (c) 2014 Teddy Kitchen. All rights reserved.
//


#import <SpriteKit/SpriteKit.h>
#import "CBItem.h"
#import "CBButtonHandler.h"

@class CBButtonHandler;

@interface CBButton : SKSpriteNode

@property NSString * summary;
@property NSString * title;

@property CBButtonHandler * handler;


+(id)buttonWithColor:(SKColor *)color size:(CGSize)size title:(NSString *)buttonTitle;






-(void)pause;

-(void)switchToItem:(CBItem *)newItem;

-(void)heal;

-(void)block;


-(NSString *)description;

-(void)setButtonPosition:(CGPoint)position;







@end
