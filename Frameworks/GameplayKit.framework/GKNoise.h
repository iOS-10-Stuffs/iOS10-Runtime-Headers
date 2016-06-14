/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKNoise : NSObject {
    NSDictionary * _gradientColors;
    struct vector<noise::module::Module *, std::__1::allocator<noise::module::Module *> > { 
        struct Module {} **__begin_; 
        struct Module {} **__end_; 
        struct __compressed_pair<noise::module::Module **, std::__1::allocator<noise::module::Module *> > { 
            struct Module {} **__first_; 
        } __end_cap_; 
    }  _modules;
}

@property (nonatomic, copy) NSDictionary *gradientColors;

+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2;
+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2 componentBoundaries:(id)arg3 boundaryBlendDistances:(id)arg4;
+ (id)noiseWithNoiseSource:(id)arg1;
+ (id)noiseWithNoiseSource:(id)arg1 gradientColors:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__blendWithNoise:(id)arg1 selectionNoise:(id)arg2 selectionRangeLowerBound:(double)arg3 selectionRangeUpperBound:(double)arg4 selectionBoundaryBlendDistance:(double)arg5;
- (struct vector<noise::module::Module *, std::__1::allocator<noise::module::Module *> > { struct Module {} **x1; struct Module {} **x2; struct __compressed_pair<noise::module::Module **, std::__1::allocator<noise::module::Module *> > { struct Module {} **x_3_1_1; } x3; }*)__modules;
- (void)addWithNoise:(id)arg1;
- (void)applyAbsoluteValue;
- (void)applyTurbulenceWithFrequency:(double)arg1 power:(double)arg2 roughness:(int)arg3 seed:(int)arg4;
- (void)cacheBinaryModule:(struct Module { int (**x1)(); struct Module {} **x2; }*)arg1 rhsNoise:(id)arg2;
- (void)cacheQuaternaryModule:(struct Module { int (**x1)(); struct Module {} **x2; }*)arg1 xDisplacementNoise:(id)arg2 yDisplacementNoise:(id)arg3 zDisplacementNoise:(id)arg4;
- (void)cacheTernaryModule:(struct Module { int (**x1)(); struct Module {} **x2; }*)arg1 rhsNoise:(id)arg2 selectionNoise:(id)arg3;
- (void)cacheUnaryModule:(struct Module { int (**x1)(); struct Module {} **x2; }*)arg1;
- (void)clampWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (const struct Module { int (**x1)(); struct Module {} **x2; }*)cloneRecursive:(const struct Module { int (**x1)(); struct Module {} **x2; }*)arg1;
- (void)dealloc;
- (void)displaceXWithNoise:(id)arg1 yWithNoise:(id)arg2 zWithNoise:(id)arg3;
- (id)gradientColors;
- (id)init;
- (id)initWithNoiseSource:(id)arg1;
- (id)initWithNoiseSource:(id)arg1 gradientColors:(id)arg2;
- (void)invert;
- (void)maximumWithNoise:(id)arg1;
- (void)minimumWithNoise:(id)arg1;
- (void)moveBy;
- (void)multiplyWithNoise:(id)arg1;
- (void)raiseToPower:(double)arg1;
- (void)raiseToPowerWithNoise:(id)arg1;
- (void)remapValuesToCurveWithControlPoints:(id)arg1;
- (void)remapValuesToTerracesWithPeaks:(id)arg1 terracesInverted:(bool)arg2;
- (void)rotateBy;
- (void)scaleBy;
- (void)setGradientColors:(id)arg1;

@end