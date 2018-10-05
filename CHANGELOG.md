# MY92XX change log

The format is based on [Keep a Changelog](http://keepachangelog.com/)
and this project adheres to [Semantic Versioning](http://semver.org/).

## [3.0.3] 2018-10-05
### Changed
- Small changes

## [3.0.2] 2018-08-11
### Fixed
- Fix mask math when using 16bit (thanks to @kduve)

## [3.0.1] 2018-03-06
### Fixed
- Buffer overflow bug in constructor (thanks to @a4711 and @gkaindl)

## [3.0.0] 2017-11-13
### Changed
- Class name changed from my9291 to my92xx, that's why there is a new repo
- Complete change in the API (setColor disappears, use setChannel and update to refresh)
- Builtin support for dais chained devices
- Out of the box supports MY9291 (4 channels) and MY9231 (3 channels)

### Fixed
- Fix initialization for daisy chained devices

## [2.0.0] 2017-08-26
### Added
- Support for 5 channels bulbs

### Changed
- Color has now 5 components, check examples

## [1.0.1] 2017-02-26
### Added
- Support for AVR architecture (untested)

## [1.0.0] 2017-02-25
- Initial version of the library
