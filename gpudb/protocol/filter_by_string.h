/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_STRING_H__
#define __FILTER_BY_STRING_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterByString(const FilterByStringRequest&) const}.
     * <p>
     * Calculates which objects from a table, collection, or view match a
     * string expression for the given string columns. The 'mode' may be:

     * * search : full text search query with wildcards and boolean operators,
     * e.g. '(bob* OR sue) AND NOT jane'. Note that for this mode, no column
     * can be specified in @a columnNames; all string columns of the table that
     * have text search enabled will be searched. Also, the first character of
     * a search term cannot be a wildcard (* or ?), and search terms cannot be
     * any of the following:  "a", "an", "and", "are", "as", "at", "be", "but",
     * "by", "for", "if", "in", "into", "is", "it", "no", "not", "of", "on",
     * "or", "such", "that", "the", "their", "then", "there", "these", "they",
     * "this", "to", "was", "will", "with".
     *     Search query types:
     *         * Multiple search terms
     *             ex. perfect union - will match any record containing
     * "perfect", "union", or both.
     *         * Exact phrases
     *             ex. "Perfect Union" - will only match the exact phrase
     * "Perfect Union"
     *         * Boolean (NOT, AND, OR, parentheses. OR assumed if no operator
     * specified)
     *             ex. justice AND tranquility - will match only those records
     * containing both justice and tranquility
     *         * XOR (specified with -)
     *             ex. justice - peace - will match records containing
     * "justice" or "peace", but not both
     *         * Zero or more char wildcard - (specified with *)
     *             ex, est*is* - will match any records containing a word that
     * starts with "est" and ends with "sh", such as "establish",
     * "establishable", and "establishment"
     *         * Exactly one char wildcard - (specified with ?)
     *             ex. est???is* - will only match strings that start with
     * "est", followed by exactly three letters, followed by "is", followed by
     * one more letter.  This would only match "establish"
     *         * Fuzzy search (term~)
     *             ex. rear~ will match rear,fear,bear,read,etc.
     *         * Proximity - match two words within a specified distance of
     * eachother
     *             ex. "Union Tranquility"~10 will match any record that has
     * the words Union and Tranquility within 10 words of eachother
     *         * Range - inclusive [<term1> TO <term2>] and exclusive {<term1>
     * TO <term2>}.  Note: This is a string search, so numbers will be seen as
     * a string of numeric characters, not as a number.  Ex. 2 > 123
     *             ex. [100 TO 200] will find all strings between 100 and 200
     * inclusive.
     *             ex. {alpha to beta} will find all strings between alpha and
     * beta, but not the words alpha or beta
     *         * escaping special characters - Special characters are escaped
     * with a backslash(\), special characters are: + - && || ! ( ) { } [ ] ^ "
     * ~ * ? : \
     * <p>
     * * equals: exact whole-string match (accelerated)
     * * contains: partial substring match (not accelerated).  If the column is
     * a string type (non-charN) and the number of records is too large, it
     * will return 0.
     * * starts_with: strings that start with the given expression (not
     * accelerated), If the column is a string type (non-charN) and the number
     * of records is too large, it will return 0.
     * * regex: full regular expression search (not accelerated). If the column
     * is a string type (non-charN) and the number of records is too large, it
     * will return 0.
     * <p>
     * The options 'case_sensitive' can be used to modify the behavior for all
     * modes except 'search'
     */
    struct FilterByStringRequest
    {

        /**
         * Constructs a FilterByStringRequest object with default parameter
         * values.
         */
        FilterByStringRequest() :
            tableName(std::string()),
            viewName(std::string()),
            expression(std::string()),
            mode(std::string()),
            columnNames(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterByStringRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the filter
         *                        operation will be performed.  Must be an
         *                        existing table, collection or view.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Must not be an
         *                       already existing collection, table or view.
         *                       Default value is an empty string.
         * @param[in] expression_  The expression with which to filter the
         *                         table.
         * @param[in] mode_  The string filtering mode to apply. See above for
         *                   details. Values: 'search', 'equals', 'contains',
         *                   'starts_with', 'regex'.
         * @param[in] columnNames_  List of columns on which to apply the
         *                          filter. Ignored for 'search' mode.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> case_sensitive: If 'false' then
         *                      string filtering will ignore case. Does not
         *                      apply to 'search' mode. Values: 'true',
         *                      'false'.
         *                      </ul>
         *                        Default value is an empty std::map.
         * 
         */
        FilterByStringRequest(const std::string& tableName_, const std::string& viewName_, const std::string& expression_, const std::string& mode_, const std::vector<std::string>& columnNames_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            expression( expression_ ),
            mode( mode_ ),
            columnNames( columnNames_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::string expression;
        std::string mode;
        std::vector<std::string> columnNames;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByStringRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterByStringRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.expression);
            ::avro::encode(e, v.mode);
            ::avro::encode(e, v.columnNames);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterByStringRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.expression);
                            break;

                        case 3:
                            ::avro::decode(d, v.mode);
                            break;

                        case 4:
                            ::avro::decode(d, v.columnNames);
                            break;

                        case 5:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.expression);
                ::avro::decode(d, v.mode);
                ::avro::decode(d, v.columnNames);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterByString(const FilterByStringRequest&) const}.
     * <p>
     * Calculates which objects from a table, collection, or view match a
     * string expression for the given string columns. The 'mode' may be:

     * * search : full text search query with wildcards and boolean operators,
     * e.g. '(bob* OR sue) AND NOT jane'. Note that for this mode, no column
     * can be specified in @a columnNames; all string columns of the table that
     * have text search enabled will be searched. Also, the first character of
     * a search term cannot be a wildcard (* or ?), and search terms cannot be
     * any of the following:  "a", "an", "and", "are", "as", "at", "be", "but",
     * "by", "for", "if", "in", "into", "is", "it", "no", "not", "of", "on",
     * "or", "such", "that", "the", "their", "then", "there", "these", "they",
     * "this", "to", "was", "will", "with".
     *     Search query types:
     *         * Multiple search terms
     *             ex. perfect union - will match any record containing
     * "perfect", "union", or both.
     *         * Exact phrases
     *             ex. "Perfect Union" - will only match the exact phrase
     * "Perfect Union"
     *         * Boolean (NOT, AND, OR, parentheses. OR assumed if no operator
     * specified)
     *             ex. justice AND tranquility - will match only those records
     * containing both justice and tranquility
     *         * XOR (specified with -)
     *             ex. justice - peace - will match records containing
     * "justice" or "peace", but not both
     *         * Zero or more char wildcard - (specified with *)
     *             ex, est*is* - will match any records containing a word that
     * starts with "est" and ends with "sh", such as "establish",
     * "establishable", and "establishment"
     *         * Exactly one char wildcard - (specified with ?)
     *             ex. est???is* - will only match strings that start with
     * "est", followed by exactly three letters, followed by "is", followed by
     * one more letter.  This would only match "establish"
     *         * Fuzzy search (term~)
     *             ex. rear~ will match rear,fear,bear,read,etc.
     *         * Proximity - match two words within a specified distance of
     * eachother
     *             ex. "Union Tranquility"~10 will match any record that has
     * the words Union and Tranquility within 10 words of eachother
     *         * Range - inclusive [<term1> TO <term2>] and exclusive {<term1>
     * TO <term2>}.  Note: This is a string search, so numbers will be seen as
     * a string of numeric characters, not as a number.  Ex. 2 > 123
     *             ex. [100 TO 200] will find all strings between 100 and 200
     * inclusive.
     *             ex. {alpha to beta} will find all strings between alpha and
     * beta, but not the words alpha or beta
     *         * escaping special characters - Special characters are escaped
     * with a backslash(\), special characters are: + - && || ! ( ) { } [ ] ^ "
     * ~ * ? : \
     * <p>
     * * equals: exact whole-string match (accelerated)
     * * contains: partial substring match (not accelerated).  If the column is
     * a string type (non-charN) and the number of records is too large, it
     * will return 0.
     * * starts_with: strings that start with the given expression (not
     * accelerated), If the column is a string type (non-charN) and the number
     * of records is too large, it will return 0.
     * * regex: full regular expression search (not accelerated). If the column
     * is a string type (non-charN) and the number of records is too large, it
     * will return 0.
     * <p>
     * The options 'case_sensitive' can be used to modify the behavior for all
     * modes except 'search'
     */
    struct FilterByStringResponse
    {

        /**
         * Constructs a FilterByStringResponse object with default parameter
         * values.
         */
        FilterByStringResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByStringResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterByStringResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterByStringResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
