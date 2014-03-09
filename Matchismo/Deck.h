//
//  Deck.h
//  Matchismo
//
//  Created by Hubert Piotrowski on 9/3/14.
//  Copyright (c) 2014 Hubert Piotrowski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
