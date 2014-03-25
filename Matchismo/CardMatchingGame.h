//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Hubert Piotrowski on 15/3/14.
//  Copyright (c) 2014 Hubert Piotrowski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initializer
-(instancetype)initWIthCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;

-(Card *)cardAtIndex:(NSUInteger)index;

@property(nonatomic, readonly) NSInteger score;

@end
